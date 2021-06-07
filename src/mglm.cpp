/*
 Name:		mglm.cpp
 Created:	6/7/2021 12:12:34 PM
 Author:	HerrNamenlos123
 Editor:	http://www.visualmicro.com
*/

#include "mglm.h"
#include "math.h"

namespace mglm {

	vec3::operator ivec3() {
		return ivec3(x, y, z);
	}

	ivec3::operator vec3() {
		return vec3(x, y, z);
	}

	vec3 normalize(const vec3& v) {
		return v / mglm::length(v);
	}

	ivec3 normalize(const ivec3& v) {
		return v / mglm::length(v);
	}

	float length(const vec3& v) {
		return sqrtf(powf(v.x, 2.f) + powf(v.y, 2.f) + powf(v.z, 2.f));
	}

	float length(const ivec3& v) {
		return sqrtf(powf(v.x, 2.f) + powf(v.y, 2.f) + powf(v.z, 2.f));
	}

}
