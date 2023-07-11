
#include "mglm.h"
#include "math.h"

namespace mglm {

	vec2::operator ivec2() {
		return ivec2(x, y);
	}

	vec2 operator*(float n, const vec2& v) { 
		return v * n; 
	};

	vec2 operator/(float n, const vec2& v) { 
		return v * n; 
	};

	ivec2::operator vec2() {
		return vec2(x, y);
	}

	ivec2 operator*(float n, const ivec2& v) { 
		return v * n; 
	};

	ivec2 operator/(float n, const ivec2& v) { 
		return v * n; 
	};

	vec3::operator ivec3() {
		return ivec3(x, y, z);
	}

	vec3 operator*(float n, const vec3& v) { 
		return v * n; 
	};

	vec3 operator/(float n, const vec3& v) { 
		return v * n; 
	};

	ivec3::operator vec3() {
		return vec3(x, y, z);
	}

	ivec3 operator*(float n, const ivec3& v) { 
		return v * n; 
	};

	ivec3 operator/(float n, const ivec3& v) { 
		return v * n; 
	};

	float length(const vec2& v) {
		return sqrtf(powf(v.x, 2.f) + powf(v.y, 2.f));
	}

	float length(const ivec2& v) {
		return sqrtf(powf(v.x, 2.f) + powf(v.y, 2.f));
	}

	float length(const vec3& v) {
		return sqrtf(powf(v.x, 2.f) + powf(v.y, 2.f) + powf(v.z, 2.f));
	}

	float length(const ivec3& v) {
		return sqrtf(powf(v.x, 2.f) + powf(v.y, 2.f) + powf(v.z, 2.f));
	}

	float distance(const vec2& p1, const vec2& p2) {
		return length(p2 - p1);
	}

	float distance(const ivec2& p1, const ivec2& p2) {
		return length(p2 - p1);
	}

	float distance(const vec3& p1, const vec3& p2) {
		return length(p2 - p1);
	}

	float distance(const ivec3& p1, const ivec3& p2) {
		return length(p2 - p1);
	}

	float dot(const vec2& v1, const vec2& v2) {
		return v1.x * v2.x + v1.y * v2.y;
	}

	float dot(const vec3& v1, const vec3& v2) {
		return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
	}

}

bool isnan(const mglm::vec2& v) {
	return isnan(v.x) || isnan(v.y);
}

bool isnan(const mglm::ivec2& v) {
	return isnan(v.x) || isnan(v.y);
}

bool isnan(const mglm::vec3& v) {
	return isnan(v.x) || isnan(v.y) || isnan(v.z);
}

bool isnan(const mglm::ivec3& v) {
	return isnan(v.x) || isnan(v.y) || isnan(v.z);
}
