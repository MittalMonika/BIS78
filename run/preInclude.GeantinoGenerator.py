print 'SINGLE PARTICLE GENERATOR'

## Run ParticleGun
import AthenaCommon.AtlasUnixGeneratorJob

from AthenaCommon.AlgSequence import AlgSequence
topSeq = AlgSequence()

import ParticleGun as PG
from G4AtlasApps.SimFlags import simFlags
pg = PG.ParticleGun(randomSvcName=simFlags.RandomSvc.get_Value(), randomStream="SINGLE")
#pg.sampler.pid = PG.CyclicSeqSampler([-13,13])
pg.sampler.pid = 999
pg.sampler.mom = PG.PtEtaMPhiSampler(pt=[5000000,7000000] , eta=[1.0,1.3])
topSeq += pg

try:
    from GeneratorModules.GeneratorModulesConf import CopyEventWeight
    topSeq += CopyEventWeight(TruthCollKey="GEN_EVENT")
except:
    include("G4AtlasApps/fragment.SimCopyWeights.py")
    
