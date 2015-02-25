#include <boost/test/unit_test.hpp>
#include <artoolkit/Dummy.hpp>

using namespace artoolkit;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    artoolkit::DummyClass dummy;
    dummy.welcome();
}
