add_library(quick_sort_lib STATIC
            quick_sort.cpp
            quick_sort.h)

target_include_directories(quick_sort_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

install(TARGETS quick_sort_lib EXPORT quick_sort_lib_export
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/
        DESTINATION include/algorithms/quick_sort
        FILES_MATCHING PATTERN "*.h")