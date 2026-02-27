#include "pch.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}
// Aidd inputName and inputValue to the following function
void exampleFunction(int inputName) {
	// Function implementation
	int result = inputName * 2;
	std::cout << "The result is: " << result << std::endl;
}
int main() {
	exampleFunction(5);
	return 0;
}
//   Use the TEST_F macro instead.
//   virtual void TestBody() = 0;
//
/ GTEST_DISALLOW_COPY_AND_ASSIGN_(Test);
#include <iostream>
#include <gtest/gtest.h>
InputName: intMichael_Sanchez
InputValue : 10
using namespace std;
void exampleFunction(int intMichael_Sanchez) {
	// Funciton implementation
	int result = intMichael_Sanchez * 2;
}

// Uncomment the next line to use precompiled headers
#include "pch.h"
// uncomment the next line if you do not use precompiled headers
//#include "gtest/gtest.h"
//
// the global test environment setup and tear down
// you should not need to change anything here
class Environment : public ::testing::Environment
{
public:
    ~Environment() override {}

    // Override this to define how to set up the environment.
    void SetUp() override
    {
        //  initialize random seed
        srand(time(nullptr));
    }

    // Override this to define how to tear down the environment.
    void TearDown() override {}
};

// create our test class to house shared data between tests
// you should not need to change anything here
class CollectionTest : public ::testing::Test
{
protected:
    // create a smart point to hold our collection
    std::unique_ptr<std::vector<int>> collection;

    void SetUp() override
    { // create a new collection to be used in the test
        collection.reset(new std::vector<int>);
    }

    void TearDown() override
    { //  erase all elements in the collection, if any remain
        collection->clear();
        // free the pointer
        collection.reset(nullptr);
    }

    // helper function to add random values from 0 to 99 count times to the collection
    void add_entries(int count)
    {
        assert(count > 0);
        for (auto i = 0; i < count; ++i)
            collection->push_back(rand() % 100);
    }
};

// When should you use the EXPECT_xxx or ASSERT_xxx macros?
// Use ASSERT when failure should terminate processing, such as the reason for the test case.
// Use EXPECT when failure should notify, but processing should continue

// Test that a collection is empty when created.
// Prior to calling this (and all other TEST_F defined methods),
//  CollectionTest::StartUp is called.
// Following this method (and all other TEST_F defined methods),
//  CollectionTest::TearDown is called
TEST_F(CollectionTest, CollectionSmartPointerIsNotNull)
{
    // is the collection created
    ASSERT_TRUE(collection);

    // if empty, the size must be 0
    ASSERT_NE(collection.get(), nullptr);
}

// Test that a collection is empty when created.
TEST_F(CollectionTest, IsEmptyOnCreate)
{
    // is the collection empty?
    ASSERT_TRUE(collection->empty());

    // if empty, the size must be 0
    ASSERT_EQ(collection->size(), 0);
}

/* Comment this test out to prevent the test from running
 * Uncomment this test to see a failure in the test explorer */
TEST_F(CollectionTest, AlwaysFail)
{
    FAIL();
}

// TODO: Create a test to verify adding a single value to an empty collection
TEST_F(CollectionTest, CanAddToEmptyVector)
{
    // is the collection empty?
    // if empty, the size must be 0

    add_entries(1);

    // is the collection still empty?
    // if not empty, what must the size be?
}

// TODO: Create a test to verify adding five values to collection
TEST_F(CollectionTest, CanAddFiveValuesToVector)
{
    add_entries(5);
}

// TODO: Create a test to verify that max size is greater than or equal to size for 0, 1, 5, 10 entries

// TODO: Create a test to verify that capacity is greater than or equal to size for 0, 1, 5, 10 entries

// TODO: Create a test to verify resizing increases the collection

// TODO: Create a test to verify resizing decreases the collection

// TODO: Create a test to verify resizing decreases the collection to zero

// TODO: Create a test to verify clear erases the collection

// TODO: Create a test to verify erase(begin,end) erases the collection

// TODO: Create a test to verify reserve increases the capacity but not the size of the collection

// TODO: Create a test to verify the std::out_of_range exception is thrown when calling at() with an index out of bounds
// NOTE: This is a negative test

// TODO: Create 2 unit tests of your own to test something on the collection - do 1 positive & 1 negative
std::cout << "The result is: " << result << std::endl;
}
int main() {
	exampleFunction(10);
	return 0;
}
Description:   A large banking web application is implementing unit tests
as a best practice in the SDLC.
Input :
    Output :
    Known bugs :
Missing features :
The source code has been commented with TODOs to explain the detailed rules
you must follow.There are comments that mark code that must be changed.
Remember to leverage capabilities provided by the  standard C++ library to help you achieve success.
License : Attribution - NonCommercial 4.0 International(CC BY - NC 4.0)
Modifications :
    Date                      Comment
    -------- - ------------------------------------------------

    * ***********************************************************************/
    // Uncomment the next line to use precompiled headers
#include "pch.h"
// uncomment the next line if you do not use precompiled headers
//#include "gtest/gtest.h"
//
// the global test environment setup and tear down
// you should not need to change anything here
class Environment : public ::testing::Environment
{
public:
    ~Environment() override {}

    // Override this to define how to set up the environment.
    void SetUp() override
    {
        //  initialize random seed
        srand(time(nullptr));
    }

    // Override this to define how to tear down the environment.
    void TearDown() override {}
};

// create our test class to house shared data between tests
// you should not need to change anything here
class CollectionTest : public ::testing::Test
{
protected:
    // create a smart point to hold our collection
    std::unique_ptr<std::vector<int>> collection;

    void SetUp() override
    { // create a new collection to be used in the test
        collection.reset(new std::vector<int>);
    }

    void TearDown() override
    { //  erase all elements in the collection, if any remain
        collection->clear();
        // free the pointer
        collection.reset(nullptr);
    }

    // helper function to add random values from 0 to 99 count times to the collection
    void add_entries(int count)
    {
        assert(count > 0);
        for (auto i = 0; i < count; ++i)
            collection->push_back(rand() % 100);
    }
};

// When should you use the EXPECT_xxx or ASSERT_xxx macros?
// Use ASSERT when failure should terminate processing, such as the reason for the test case.
// Use EXPECT when failure should notify, but processing should continue

// Test that a collection is empty when created.
// Prior to calling this (and all other TEST_F defined methods),
//  CollectionTest::StartUp is called.
// Following this method (and all other TEST_F defined methods),
//  CollectionTest::TearDown is called
TEST_F(CollectionTest, CollectionSmartPointerIsNotNull)
{
    // is the collection created
    ASSERT_TRUE(collection);

    // if empty, the size must be 0
    ASSERT_NE(collection.get(), nullptr);
}

// Test that a collection is empty when created.
TEST_F(CollectionTest, IsEmptyOnCreate)
{
    // is the collection empty?
    ASSERT_TRUE(collection->empty());

    // if empty, the size must be 0
    ASSERT_EQ(collection->size(), 0);
}

/* Comment this test out to prevent the test from running
 * Uncomment this test to see a failure in the test explorer */
TEST_F(CollectionTest, AlwaysFail)
{
    FAIL();
}

//  Create a test to verify adding a single value to an empty collection
TEST_F(CollectionTest, CanAddToEmptyVector)
{
    // is the collection empty?
    ASSERT_TRUE(collection->empty());
    // if empty, the size must be 0
    ASSERT_EQ(collection->size(), 0);

    add_entries(1);

    // is the collection still empty?
    ASSERT_FALSE(collection->empty());
    // if not empty, what must the size be?
    ASSERT_GT(collection->size(), 0);
}

// TODO: Create a test to verify adding five values to collection
TEST_F(CollectionTest, CanAddFiveValuesToVector)
{
    add_entries(5);
    ASSERT_EQ(collection->size(), 5);
}

// TODO: Create a test to verify that max size is greater than or equal to size for 0, 1, 5, 10 entries
TEST_F(CollectionTest, MaxIsGreaterThanOrEqualToSizeTest) {
    add_entries(11);

    ASSERT_TRUE(collection->max_size() >= 0);
    ASSERT_TRUE(collection->max_size() >= 1);
    ASSERT_TRUE(collection->max_size() >= 5);
    ASSERT_TRUE(collection->max_size() >= 10);
}

// TODO: Create a test to verify that capacity is greater than or equal to size for 0, 1, 5, 10 entries
TEST_F(CollectionTest, CapacityIsGreaterThanOrEqualToSizeTest) {
    add_entries(11);

    ASSERT_TRUE(collection->capacity() >= 0);
    ASSERT_TRUE(collection->capacity() >= 1);
    ASSERT_TRUE(collection->capacity() >= 5);
    ASSERT_TRUE(collection->capacity() >= 10);
}

// TODO: Create a test to verify resizing increases the collection
TEST_F(CollectionTest, ResizeIncreaseTest) {
    add_entries(1);

    size_t previousSize = collection->size();
    collection->resize(20);
    ASSERT_TRUE(collection->size() > previousSize);
}

// TODO: Create a test to verify resizing decreases the collection
TEST_F(CollectionTest, ResizeDecreaseTest) {
    add_entries(20);

    size_t previousSize = collection->size();
    collection->resize(1);
    ASSERT_TRUE(collection->size() < previousSize);
}

// TODO: Create a test to verify resizing decreases the collection to zero
TEST_F(CollectionTest, ResizeIsZeroTest) {
    add_entries(20);

    size_t previousSize = collection->size();
    collection->resize(0);
    ASSERT_TRUE(collection->size() == 0);
}

// TODO: Create a test to verify clear erases the collection
TEST_F(CollectionTest, VerifyCollectionClearedTest) {
    add_entries(20);

    collection->clear();
    ASSERT_TRUE(collection->size() == 0);
}

// TODO: Create a test to verify erase(begin,end) erases the collection
TEST_F(CollectionTest, VerifyEraseBeginEndTest) {
    add_entries(20);

    collection->erase(collection->begin(), collection->end());
    ASSERT_TRUE(collection->size() == 0);
}

// TODO: Create a test to verify reserve increases the capacity but not the size of the collection
TEST_F(CollectionTest, ReserveIncreaseCapacityNotSizeTest) {
    add_entries(20);

    size_t prevCapacity = collection->capacity();
    size_t prevSize = collection->size();

    collection->reserve(30);

    ASSERT_TRUE(collection->size() == prevSize);
    ASSERT_TRUE(collection->capacity() > prevCapacity);
}

// TODO: Create a test to verify the std::out_of_range exception is thrown when calling at() with an index out of bounds
// NOTE: This is a negative test
TEST_F(CollectionTest, IndexOutOfRangeTest) {
    add_entries(5);

    EXPECT_THROW(collection->at(20), std::out_of_range);
}

// TODO: Create 2 unit tests of your own to test something on the collection - do 1 positive & 1 negative
TEST_F(CollectionTest, CollectionValueSwapTest) {
    add_entries(3);
    std::vector<int> otherCollection(5, 200);
    ASSERT_TRUE(collection->size() == 3);
    collection->swap(otherCollection);
    ASSERT_TRUE(collection->size() == 5);
}

TEST_F(CollectionTest, TestPopBack) {
    add_entries(3);

    collection->pop_back();

    ASSERT_FALSE(collection->size() == 10);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    // add the global test environment
    ::testing::AddGlobalTestEnvironment(new Environment);
    // run all the tests
    return RUN_ALL_TESTS();
}
    // Function implementation
    int result = intMichael_Sanchez * 2;
    std::cout << "The result is: " << result << std::endl;
}
int main() {
    exampleFunction(10);
    return 0;
}
using namespace std;
void exampleFunction(int intMichael_Sanchez) {
    // Function implementation
	int result = intMichael_Sanchez * 2;
	std::cout << "The result is: " << result << std::endl;
}
int main() {
    exampleFunction(10);
    return 0;
}
// Uncomment the next line to use precompiled headers
#include "pch.h"
// uncomment the next line if you do not use precompiled headers
//#include "gtest/gtest.h"
//
// the global test environment setup and tear down
// you should not need to change anything here
class Environment : public ::testing::Environment
{
public:
    ~Environment() override {}

    // Override this to define how to set up the environment.
    void SetUp() override
    {
        //  initialize random seed
        srand(time(nullptr));
    }

    // Override this to define how to tear down the environment.
    void TearDown() override {}
};

// create our test class to house shared data between tests
// you should not need to change anything here
class CollectionTest : public ::testing::Test
{
protected:
    // create a smart point to hold our collection
    std::unique_ptr<std::vector<int>> collection;

    void SetUp() override
    { // create a new collection to be used in the test
        collection.reset(new std::vector<int>);
    }

    void TearDown() override
    { //  erase all elements in the collection, if any remain
        collection->clear();
        // free the pointer
        collection.reset(nullptr);
    }

    // helper function to add random values from 0 to 99 count times to the collection
    void add_entries(int count)
    {
        assert(count > 0);
        for (auto i = 0; i < count; ++i)
            collection->push_back(rand() % 100);
    }
};

// When should you use the EXPECT_xxx or ASSERT_xxx macros?
// Use ASSERT when failure should terminate processing, such as the reason for the test case.
// Use EXPECT when failure should notify, but processing should continue

// Test that a collection is empty when created.
// Prior to calling this (and all other TEST_F defined methods),
//  CollectionTest::StartUp is called.
// Following this method (and all other TEST_F defined methods),
//  CollectionTest::TearDown is called
TEST_F(CollectionTest, CollectionSmartPointerIsNotNull)
{
    // is the collection created
    ASSERT_TRUE(collection);

    // if empty, the size must be 0
    ASSERT_NE(collection.get(), nullptr);
}

// Test that a collection is empty when created.
TEST_F(CollectionTest, IsEmptyOnCreate)
{
    // is the collection empty?
    ASSERT_TRUE(collection->empty());

    // if empty, the size must be 0
    ASSERT_EQ(collection->size(), 0);
}

/* Comment this test out to prevent the test from running
 * Uncomment this test to see a failure in the test explorer */
 /*
 TEST_F(CollectionTest, AlwaysFail)
 {
   FAIL();
 }
 */

 // Test to verify adding a single value to an empty collection
TEST_F(CollectionTest, CanAddToEmptyVector)
{
    // is the collection empty?
    ASSERT_TRUE(collection->empty());
    // if empty, the size must be 0
    ASSERT_EQ(collection->size(), 0);

    add_entries(1);

    // is the collection still empty?
    ASSERT_FALSE(collection->empty());
    // if not empty, what must the size be?
    ASSERT_EQ(collection->size(), 1);
}

// Test to verify adding five values to collection
TEST_F(CollectionTest, CanAddFiveValuesToVector)
{
    // Verify initial state
    ASSERT_EQ(collection->size(), 0);

    add_entries(5);

    // Verify five entries were added
    ASSERT_EQ(collection->size(), 5);
}

// Test to verify that max size is greater than or equal to size for 0, 1, 5, 10 entries
TEST_F(CollectionTest, MaxSizeGreaterThanOrEqualToSize)
{
    // Test with 0 entries
    EXPECT_GE(collection->max_size(), collection->size());

    // Test with 1 entry
    add_entries(1);
    EXPECT_GE(collection->max_size(), collection->size());

    // Test with 5 entries
    collection->clear();
    add_entries(5);
    EXPECT_GE(collection->max_size(), collection->size());

    // Test with 10 entries
    collection->clear();
    add_entries(10);
    EXPECT_GE(collection->max_size(), collection->size());
}

// Test to verify that capacity is greater than or equal to size for 0, 1, 5, 10 entries
TEST_F(CollectionTest, CapacityGreaterThanOrEqualToSize)
{
    // Test with 0 entries
    EXPECT_GE(collection->capacity(), collection->size());

    // Test with 1 entry
    add_entries(1);
    EXPECT_GE(collection->capacity(), collection->size());

    // Test with 5 entries
    collection->clear();
    add_entries(5);
    EXPECT_GE(collection->capacity(), collection->size());

    // Test with 10 entries
    collection->clear();
    add_entries(10);
    EXPECT_GE(collection->capacity(), collection->size());
}

// Test to verify resizing increases the collection
TEST_F(CollectionTest, ResizingIncreasesCollection)
{
    size_t initialSize = collection->size();
    size_t newSize = initialSize + 5;

    collection->resize(newSize);

    ASSERT_EQ(collection->size(), newSize);
    ASSERT_GT(collection->size(), initialSize);
}

// Test to verify resizing decreases the collection
TEST_F(CollectionTest, ResizingDecreasesCollection)
{
    // Add some entries first
    add_entries(10);
    size_t initialSize = collection->size();
    size_t newSize = initialSize - 5;

    collection->resize(newSize);

    ASSERT_EQ(collection->size(), newSize);
    ASSERT_LT(collection->size(), initialSize);
}

// Test to verify resizing decreases the collection to zero
TEST_F(CollectionTest, ResizingDecreasesToZero)
{
    // Add some entries first
    add_entries(5);
    ASSERT_GT(collection->size(), 0);

    collection->resize(0);

    ASSERT_EQ(collection->size(), 0);
    ASSERT_TRUE(collection->empty());
}

// Test to verify clear erases the collection
TEST_F(CollectionTest, ClearErasesCollection)
{
    // Add some entries first
    add_entries(5);
    ASSERT_GT(collection->size(), 0);

    collection->clear();

    ASSERT_EQ(collection->size(), 0);
    ASSERT_TRUE(collection->empty());
}

// Test to verify erase(begin,end) erases the collection
TEST_F(CollectionTest, EraseRemovesAllElements)
{
    // Add some entries first
    add_entries(5);
    ASSERT_GT(collection->size(), 0);

    collection->erase(collection->begin(), collection->end());

    ASSERT_EQ(collection->size(), 0);
    ASSERT_TRUE(collection->empty());
}

// Test to verify reserve increases the capacity but not the size of the collection
TEST_F(CollectionTest, ReserveIncreasesCapacityNotSize)
{
    size_t initialSize = collection->size();
    size_t initialCapacity = collection->capacity();
    size_t newCapacity = initialCapacity + 10;

    collection->reserve(newCapacity);

    // Size should remain unchanged
    ASSERT_EQ(collection->size(), initialSize);
    // Capacity should be at least as large as requested
    ASSERT_GE(collection->capacity(), newCapacity);
}

// Test to verify the std::out_of_range exception is thrown when calling at() with an index out of bounds
// NOTE: This is a negative test
TEST_F(CollectionTest, AtThrowsOutOfRangeException)
{
    // Try to access an element at an invalid index
    ASSERT_THROW(collection->at(0), std::out_of_range);

    // Add an element and try to access beyond it
    add_entries(1);
    ASSERT_THROW(collection->at(1), std::out_of_range);
}

// Test to verify push_back correctly adds elements to the end of the vector
TEST_F(CollectionTest, PushBackAddsElementToEnd)
{
    // Add a specific value
    int testValue = 42;
    collection->push_back(testValue);

    // Verify the value was added and is at the end
    ASSERT_EQ(collection->size(), 1);
    ASSERT_EQ(collection->back(), testValue);

    // Add another value and verify it's at the end
    int secondValue = 99;
    collection->push_back(secondValue);
    ASSERT_EQ(collection->size(), 2);
    ASSERT_EQ(collection->back(), secondValue);
}

// Negative test to verify pop_back on an empty vector causes undefined behavior
// We'll use a try-catch block to handle potential crashes
TEST_F(CollectionTest, PopBackOnEmptyVectorIsUndefined)
{
    // Ensure vector is empty
    ASSERT_TRUE(collection->empty());

    // Attempting to call front() or back() on an empty vector is undefined behavior
    // We should avoid doing this in real code, but for testing purposes:
    bool caughtException = false;
    try {
        // This is intentionally incorrect usage to demonstrate a negative test
        collection->pop_back();
    }
    catch (const std::exception&) {
        caughtException = true;
    }

    // Some implementations might not throw but could crash
    // If we got here without crashing and no exception was thrown, 
    // we'll just verify the vector is still empty
    ASSERT_TRUE(collection->empty());
}