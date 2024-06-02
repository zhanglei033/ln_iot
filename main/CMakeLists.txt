if(DEFINED IDF_PATH) # ESP32编译

file(GLOB_RECURSE CUR_SOURCE *.c *.cpp)
idf_component_register(SRCS ${CUR_SOURCE}
                       INCLUDE_DIRS "." 
                       PRIV_REQUIRES)

else() # 其他编译

endif()