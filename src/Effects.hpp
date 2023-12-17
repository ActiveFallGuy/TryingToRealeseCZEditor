#pragma once

#include "Effect.hpp"

class SimpleVertexEffect : public Effect
{
public:
	INIT_PARAMS(SimpleVertexEffect)
	virtual void effectVertices(std::vector<float>& vertices);
	virtual Params* getDefaultParams();
};