set(MAIN_PATH ${LN_COMPONENT_PATH}/main)
file(GLOB_RECURSE MAIN_SOURCE ${MAIN_PATH}/*.c ${MAIN_PATH}/*.cpp)
file(GLOB_RECURSE MAIN_HEADER ${MAIN_PATH}/*.h ${MAIN_PATH}/*.hpp)
message("MAIN_HEADER:${MAIN_HEADER}")
message("MAIN_SOURCE:${MAIN_SOURCE}")

set(COMPONENT_ROOT ${LN_COMPONENT_PATH}/components)
file(GLOB SUB_COMPONENT_ROOT ${COMPONENT_ROOT}/*)
set(COMPONENT_PATHS "")
foreach(SUBDIR ${SUB_COMPONENT_ROOT})
   if(IS_DIRECTORY ${SUBDIR})
        list(APPEND COMPONENT_PATHS ${SUBDIR})
    endif()
endforeach()
message("COMPONENT_PATHS:${COMPONENT_PATHS}")

set(COMPONENT_3RD_ROOT ${LN_COMPONENT_PATH}/components/ln3rd)
file(GLOB SUB_COMPONENT_3RD_ROOT ${COMPONENT_3RD_ROOT}/*)
set(COMPONENT_3RD_PATHS "")
foreach(3RD_PATH ${SUB_COMPONENT_3RD_ROOT})
   if(IS_DIRECTORY ${3RD_PATH})
        list(APPEND COMPONENT_3RD_PATHS ${3RD_PATH})
    endif()
endforeach()
message("COMPONENT_3RD_PATHS:${COMPONENT_3RD_PATHS}")


