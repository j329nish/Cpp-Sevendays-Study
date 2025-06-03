cmake_minimum_required(VERSION 3.14)

foreach(prob IN ITEMS prob6-1 prob6-2)
  message(STATUS "=== Start adding ${prob} ===")
  add_subdirectory(${prob})
  message(STATUS "=== Finished adding ${prob} ===")
endforeach()
