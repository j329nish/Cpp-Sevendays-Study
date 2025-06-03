cmake_minimum_required(VERSION 3.14)

foreach(prob IN ITEMS prob5-1 prob5-2 prob5-3)
  message(STATUS "=== Start adding ${prob} ===")
  add_subdirectory(${prob})
  message(STATUS "=== Finished adding ${prob} ===")
endforeach()
