import os
import sys
import optparse
import numpy
import pandas
#import scipy              
#import root_numpy         
#import root_pandas        
#import sklearn            
#import uproot                                                                                                                                                                 
import matplotlib.pyplot as plt
from root_pandas import read_root
from pandas import  DataFrame, concat
from pandas import Series
from ROOT import TLorentzVector, TH2F, TFile, TH1F

from MathUtils import getRho

#BISVars = ["",""]
#filename = "/eos/user/m/mmittal/RPCntuple.root"
#filename = "/afs/cern.ch/work/m/mmittal/private/BIS78-21.3/run/RPCntuple.root"
filename = "/afs/cern.ch/work/m/mmittal/private/BIS78-21.3/run/RPCntuple_etabis78_sideA.root"
#filename = "/afs/cern.ch/work/m/mmittal/private/BIS_monika/run/RPCntuple.root"

''' Define histograms here '''

#h_rho_vs_z = TH2F("h_rho_vs_z","h_rho_vs_z",15000,0,15000,15000,0,15000)
h_rho_vs_z = TH2F("h_rho_vs_z","h_rho_vs_z",5000,5000,1000,4000,4000,8000)
h_stripz = TH1F("h_stripz", "h_stripz",5000,5000,1000)
h_hitz  =  TH1F("h_hitz","h_hitz",5000,5000,1000)
h_stripz_1 = TH1F("h_stripz", "h_stripz",50,5800,7400)
h_hitz_1  =  TH1F("h_hitz","h_hitz",50,5800,7400)

df_out = DataFrame(columns = ["rho_","global_z_"]) 

ievent =0
for df in read_root(filename,columns="*", chunksize=125000):
    for sh_gx, sh_gy, sh_gz, dh_sz in zip(df.rpc_simhit_globalx, df.rpc_simhit_globaly, df.rpc_simhit_globalz,df.rpc_digit_stripz):
        
        print ("info of event number ", ievent )
        for ihit in range(len(sh_gx)):
            print (sh_gx[ihit], sh_gy[ihit], sh_gz[ihit])
            rho = getRho(sh_gx[ihit], sh_gy[ihit])
            h_rho_vs_z.Fill(sh_gz[ihit],rho)
            h_hitz.Fill(sh_gz[ihit])
            h_stripz.Fill(dh_sz[ihit])
            h_hitz_1.Fill(sh_gz[ihit])
            h_stripz_1.Fill(dh_sz[ihit])
            df_out = df_out.append({"rho_":rho,"global_z_":sh_gz[ihit] }, ignore_index=True)
        ievent = ievent+1


print(df_out.global_z_)
#plt.figure()
df_out.plot(kind='scatter',x= 'global_z_',y='rho_')
#plt.show()
#plt.figure(figsize=(12, 9))
plt.title("Hits", fontsize=22)
plt.xlabel("Z", fontsize=15)
plt.ylabel("rho", fontsize=15)
plt.savefig('globalrvsz.png')

fout = TFile("out_RPCntuple_etabis78_sideA.root.root","RECREATE")
print (df_out)
fout.cd()
h_rho_vs_z.Write()
h_hitz.Write()
h_stripz.Write()
h_hitz_1.Write()
h_stripz_1.Write()
fout.Close()
