file(REMOVE_RECURSE
  "../../x86_64-centos7-gcc62-opt/include/MuonIdHelpers"
  "../../x86_64-centos7-gcc62-opt/python/MuonIdHelpers/__init__.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/Package_MuonIdHelpers_tests.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
