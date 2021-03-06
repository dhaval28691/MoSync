/* Copyright 2013 David Axmark

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

	http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

/*
 * FunctorForDummy.cpp
 *
 *  Created on: Jun 1, 2011
 *      Author: gabi
 */

#include "FunctorForDummyClass.h"

bool FunctorForDummy::operator()(const DummyClass &lv, const DummyClass &rv) const
{
	return lv.getName() < rv.getName();
}


bool BinaryPredicateForDummy(const DummyClass &lv, const DummyClass &rv)
{
	return lv.getName() < rv.getName();
}

