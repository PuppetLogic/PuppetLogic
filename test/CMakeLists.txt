
target_sources(${EXECUTABLE_NAME}
        PRIVATE
            TestFixture.cpp
)

#set(GTEST_ROOT "C:/Users/isousa/Desktop/googletest/googletest/include")

# Ensure that include directories are set properly
#target_include_directories(${EXECUTABLE_NAME}
  #  PRIVATE
    #    ${CMAKE_SOURCE_DIR}
  #      ${CMAKE_SOURCE_DIR}/puppetlogic
    #    ${CMAKE_SOURCE_DIR}/puppetlogic/test
    #    ${GTEST_ROOT}  # Adjust path to Google Test headers
#)

#set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH}/${CMAKE_CURRENT_SOURCE_DIR}/../cmake) 
#find_package(GTest REQUIRED)