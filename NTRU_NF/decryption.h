#pragma once
#include "encryption.h"

bool decryptMessage(Poly e, Poly f, Poly h, char ** decPtr, size_t * lengthPtr);