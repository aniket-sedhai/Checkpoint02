// WHO ARE YOU?  WHO, WHO?!  WHO, WHO??  BEFORE EVEN MY TIME BTW...
// I AM: ___________________________

#include <cassert>
#include <iostream>

// ---------------------------------------------------------------------------------------------
// PART 1
// ---------------------------------------------------------------------------------------------
// Develop a function that divides an integer parameter x by integer 2 until the value reaches 0
// Return the number of times x is divided by 2 until it reaches 0
// Throw an std::exception object if the input parameter is a negative value
// ---------------------------------------------------------------------------------------------
// EXAMPLE: +9 -> 4 -> 2 -> 1 -> 0 (4 divisions needed for 9 to reach 0)
// EXAMPLE: -4 (throws exception since it is a negative value)
// ---------------------------------------------------------------------------------------------
// NOTE: This is not a templated function... Just a normal function you would develop in CIS2541
// ---------------------------------------------------------------------------------------------

int HowManyDivisionsByTwoUntilZero(int input_value)
{
    int n = 0;
    
    if (input_value < 0)
    {
        throw std::invalid_argument("Negative value not accepted!");
    }
    
    while (input_value != 0)
    {
        input_value /= 2;
        ++n;
    }
    
    return n;
}


// ----------------------------------------------------------------------------------------------------------
// PART 2
// ----------------------------------------------------------------------------------------------------------
// Develop a templated function that divides a templated parameter x by templated 2 until the value reaches 0
// Return the number of times x is divided by 2 until it reaches 0
// Throw an std::exception object if the input parameter is a negative value
// ----------------------------------------------------------------------------------------------------------
// An example for this is not as easy to supply, but if you divide a float or double value long enough,
// you will eventually reach a 0 value since we are engineers and not mathematicians
// EXAMPLE: -4 (throws exception since it is a negative value)
// ----------------------------------------------------------------------------------------------------------
// NOTE: This is a templated function... The new topic we covered a few weeks ago
// ----------------------------------------------------------------------------------------------------------


template <typename T>
int HowManyDivisionsByTwoUntilZero(T input_value)
{
    int n = 0;
    
    if (input_value < 0)
    {
        throw std::invalid_argument("Negative value not accepted!");
    }
    
    while (input_value != 0)
    {
        input_value /= 2;
        ++n;
    }
    
    return n;
}

// --------------------------------------------------------------------------
// SO MANY TEST CASES BELOW - YOU MAY NOT MODIFY ANYTHING FROM HERE AND BELOW
// --------------------------------------------------------------------------

void HandlePart1_IntegerTests()
{
    try
    {
        int count = HowManyDivisionsByTwoUntilZero(-1);
        assert(false && "YOU SHOULD NEVER GET HERE SINCE THE EXCEPTION SHOULD GET THROWN BY THE FUNCTION!");
    }

    catch (const std::exception& e)
    {
        std::cout << "PART 1 - INTEGER - EXCEPTION CAUGHT!" << std::endl;
    }

    assert(HowManyDivisionsByTwoUntilZero(0) == 0);
    assert(HowManyDivisionsByTwoUntilZero(8467) == 14);
    assert(HowManyDivisionsByTwoUntilZero(6334) == 13);
    assert(HowManyDivisionsByTwoUntilZero(6500) == 13);
    assert(HowManyDivisionsByTwoUntilZero(9169) == 14);
    assert(HowManyDivisionsByTwoUntilZero(5724) == 13);
    assert(HowManyDivisionsByTwoUntilZero(1478) == 11);
    assert(HowManyDivisionsByTwoUntilZero(9358) == 14);
    assert(HowManyDivisionsByTwoUntilZero(6962) == 13);
    assert(HowManyDivisionsByTwoUntilZero(4464) == 13);
    assert(HowManyDivisionsByTwoUntilZero(5705) == 13);
    assert(HowManyDivisionsByTwoUntilZero(8145) == 13);
    assert(HowManyDivisionsByTwoUntilZero(3281) == 12);
    assert(HowManyDivisionsByTwoUntilZero(6827) == 13);
    assert(HowManyDivisionsByTwoUntilZero(9961) == 14);
    assert(HowManyDivisionsByTwoUntilZero(491) == 9);
    assert(HowManyDivisionsByTwoUntilZero(2995) == 12);
    assert(HowManyDivisionsByTwoUntilZero(1942) == 11);
    assert(HowManyDivisionsByTwoUntilZero(4827) == 13);
    assert(HowManyDivisionsByTwoUntilZero(5436) == 13);
    std::cout << "PART 1 - INTEGER - ALL TESTS PASSED!" << std::endl;
}

void HandlePart2_IntegerTests()
{
    try
    {
        int count = HowManyDivisionsByTwoUntilZero<int>(-1);
        assert(false && "YOU SHOULD NEVER GET HERE SINCE THE EXCEPTION SHOULD GET THROWN BY THE FUNCTION!");
    }

    catch (const std::exception& e)
    {
        std::cout << "PART 2 - INTEGER - EXCEPTION CAUGHT!" << std::endl;
    }

    assert(HowManyDivisionsByTwoUntilZero<int>(41) == 6);
    assert(HowManyDivisionsByTwoUntilZero<int>(8467) == 14);
    assert(HowManyDivisionsByTwoUntilZero<int>(6334) == 13);
    assert(HowManyDivisionsByTwoUntilZero<int>(6500) == 13);
    assert(HowManyDivisionsByTwoUntilZero<int>(9169) == 14);
    assert(HowManyDivisionsByTwoUntilZero<int>(5724) == 13);
    assert(HowManyDivisionsByTwoUntilZero<int>(1478) == 11);
    assert(HowManyDivisionsByTwoUntilZero<int>(9358) == 14);
    assert(HowManyDivisionsByTwoUntilZero<int>(6962) == 13);
    assert(HowManyDivisionsByTwoUntilZero<int>(4464) == 13);
    assert(HowManyDivisionsByTwoUntilZero<int>(5705) == 13);
    assert(HowManyDivisionsByTwoUntilZero<int>(8145) == 13);
    assert(HowManyDivisionsByTwoUntilZero<int>(3281) == 12);
    assert(HowManyDivisionsByTwoUntilZero<int>(6827) == 13);
    assert(HowManyDivisionsByTwoUntilZero<int>(9961) == 14);
    assert(HowManyDivisionsByTwoUntilZero<int>(491) == 9);
    assert(HowManyDivisionsByTwoUntilZero<int>(2995) == 12);
    assert(HowManyDivisionsByTwoUntilZero<int>(1942) == 11);
    assert(HowManyDivisionsByTwoUntilZero<int>(4827) == 13);
    assert(HowManyDivisionsByTwoUntilZero<int>(5436) == 13);
    std::cout << "PART 2 - INTEGER - ALL TESTS PASSED!" << std::endl;
}

void HandlePart2_FloatTests()
{
    try
    {
        int count = HowManyDivisionsByTwoUntilZero<float>(-1.0f);
        assert(false && "YOU SHOULD NEVER GET HERE SINCE THE EXCEPTION SHOULD GET THROWN BY THE FUNCTION!");
    }

    catch (const std::exception& e)
    {
        std::cout << "PART 2 - FLOAT - EXCEPTION CAUGHT!" << std::endl;
    }

    assert(HowManyDivisionsByTwoUntilZero<float>(0.0f) == 0);
    assert(HowManyDivisionsByTwoUntilZero<float>(8467.0f) == 163);
    assert(HowManyDivisionsByTwoUntilZero<float>(6334.0f) == 163);
    assert(HowManyDivisionsByTwoUntilZero<float>(6500.0f) == 163);
    assert(HowManyDivisionsByTwoUntilZero<float>(9169.0f) == 163);
    assert(HowManyDivisionsByTwoUntilZero<float>(58439724.0f) == 176);
    assert(HowManyDivisionsByTwoUntilZero<float>(1478.0f) == 161);
    assert(HowManyDivisionsByTwoUntilZero<float>(89349358.0f) == 176);
    assert(HowManyDivisionsByTwoUntilZero<float>(696242.0f) == 169);
    assert(HowManyDivisionsByTwoUntilZero<float>(153.0f) == 157);
    std::cout << "PART 2 - FLOAT - ALL TESTS PASSED!" << std::endl;
}

void HandlePart2_DoubleTests()
{
    try
    {
        int count = HowManyDivisionsByTwoUntilZero<double>(-1.0);
        assert(false && "YOU SHOULD NEVER GET HERE SINCE THE EXCEPTION SHOULD GET THROWN BY THE FUNCTION!");
    }

    catch (const std::exception& e)
    {
        std::cout << "PART 2 - DOUBLE - EXCEPTION CAUGHT!" << std::endl;
    }

    assert(HowManyDivisionsByTwoUntilZero<double>(0.0) == 0);
    assert(HowManyDivisionsByTwoUntilZero<double>(8467.0) == 1088);
    assert(HowManyDivisionsByTwoUntilZero<double>(6334.0) == 1088);
    assert(HowManyDivisionsByTwoUntilZero<double>(6500.0) == 1088);
    assert(HowManyDivisionsByTwoUntilZero<double>(9169.0) == 1088);
    assert(HowManyDivisionsByTwoUntilZero<double>(58439724.0) == 1101);
    assert(HowManyDivisionsByTwoUntilZero<double>(1478.0) == 1086);
    assert(HowManyDivisionsByTwoUntilZero<double>(89349358.0) == 1101);
    assert(HowManyDivisionsByTwoUntilZero<double>(696242.0) == 1094);
    assert(HowManyDivisionsByTwoUntilZero<double>(153.0) == 1082);
    std::cout << "PART 2 - DOUBLE - ALL TESTS PASSED!" << std::endl;
}

int main()
{
    // PART 1 TESTING
    HandlePart1_IntegerTests();

    // PART 2 TESTING
    HandlePart2_IntegerTests();
    HandlePart2_FloatTests();
    HandlePart2_DoubleTests();

    // DID YOU MAKE IT HERE?  IF SO, MAKE SURE YOU FOLLOWED BEST PRACTICES AND THEN SUBMIT!
    // PLEASE ONLY SUBMIT AN UNZIPPED CPP FILE THIS TIME!
    // SLN FILES AND OTHER NON SOURCE CODE FILES WILL RECEIVE NO POINTS...  THEY'RE NOT CODE!
    std::cout << "ALL TESTS LOOK TO HAVE PASSED!" << std::endl;

    // PROGRAM COMPLETE
    return 0;
}
