//  (C) Copyright Eric Niebler 2005.
//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

/*
  Revision history:
  25 August 2005 : Initial version.
*/

#include <mlib/tests/_pc_.h>
//#include <boost/test/minimal.hpp>
#include <boost/foreach.hpp>
#include <vector>

// counter
static int counter = 0;

static std::vector<int> my_vector(4,4);

static std::vector<int> const &get_vector()
{
    ++counter;
    return my_vector;
}


///////////////////////////////////////////////////////////////////////////////
// test_main
//   
BOOST_AUTO_TEST_CASE( call_once )
{
    BOOST_FOREACH(int i, get_vector())
    {
        ((void)i); // no-op
    }

    BOOST_CHECK(1 == counter);
}
