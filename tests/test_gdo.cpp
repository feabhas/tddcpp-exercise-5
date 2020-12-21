#include "doctest.h"

#include "GarageDoorOpener.h"
#include <exception>

TEST_CASE("Door initially closed")
{
  GarageDoorOpener garageDoorOpener{};
  CHECK(garageDoorOpener.door_is_closed() == true);
}
