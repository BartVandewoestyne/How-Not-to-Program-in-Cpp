/***********************************************
 * bit_delay -- Delay one bit time for         *
 *      serial output.                         *
 *                                             *
 * Note: This function is highly system        *
 *      dependent.  If you change the          *
 *      processor or clock it will go bad.     *
 ***********************************************/
void bit_delay(void)
{
    int i;      // Loop counter
    volatile int result; // Result of the multiply

    // Factors for multiplication
    volatile int factor1 = 12;
    volatile int factor2 = 34;

    // We know that 1863 multiplies
    // delay the proper amount
    for (i = 0; i < 1863; ++i)
    {
        result = factor1 * factor2;
    }
}
