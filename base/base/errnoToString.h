#pragma once

#include <cerrno>
#include <string>

std::string errnoToString(int the_errno = errno);
