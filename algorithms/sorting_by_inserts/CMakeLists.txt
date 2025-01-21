# CMakeLists.txt в директории algorithms/merge_sort
add_library(merge_sort_lib STATIC
        merge_sort.cpp
)

# Указание публичных заголовочных файлов
target_include_directories(merge_sort_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Экспортируем библиотеку (если нужно)
install(TARGETS merge_sort_lib EXPORT merge_sort_lib_export
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/
        DESTINATION include/algorithms/merge_sort
        FILES_MATCHING PATTERN "*.h")