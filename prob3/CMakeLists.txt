cmake_minimum_required(VERSION 3.14)

foreach(prob IN ITEMS prob3-1 prob3-2 prob3-3)
  message(STATUS "=== Start adding ${prob} ===")
  add_subdirectory(${prob})
  message(STATUS "=== Finished adding ${prob} ===")
endforeach()
