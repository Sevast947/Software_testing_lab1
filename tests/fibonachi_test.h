#ifndef FIBONACHI_H
#define FIBONACHI_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <math.h>

extern "C"
{
#include "myfunc.h"
}

TEST(sq_exq_rootsTest, basic)
{
    double *roots = sq_exq_roots(1, -3, 2);
    ASSERT_EQ(roots[0], 2.0);
    ASSERT_EQ(roots[1], 1.0);
    free(roots);
}

TEST(sq_exq_rootsTest, discriminant_is_zero)
{
    double *roots = sq_exq_roots(1, -2, 1);
    ASSERT_EQ(roots[0], 1.0);
    ASSERT_EQ(roots[1], 1.0);
    free(roots);
}

TEST(sq_exq_rootsTest, no_roots)
{
    double *roots = sq_exq_roots(1, 2, 3);
    ASSERT_TRUE(isnan(roots[0]));
    ASSERT_TRUE(isnan(roots[1]));
    free(roots);
}

TEST(sq_exq_rootsTest, c_is_zero)
{
    double *roots = sq_exq_roots(2, 4, 0);
    ASSERT_EQ(roots[0], 0.0);
    ASSERT_EQ(roots[1], -2.0);
    free(roots);
}

TEST(sq_exq_rootsTest, big_numbers)
{
    double *roots = sq_exq_roots(10000, 50000, 100000);
    ASSERT_TRUE(isnan(roots[0]));
    ASSERT_TRUE(isnan(roots[1]));
    free(roots);
}

TEST(sq_exq_rootsTest, intergrated)
{
    double *roots = sq_exq_roots(fibonachi(10), fibonachi(1), fibonachi(4));
    ASSERT_TRUE(isnan(roots[0]));
    ASSERT_TRUE(isnan(roots[1]));
    free(roots);
}

#endif // FIBONACHI_H
