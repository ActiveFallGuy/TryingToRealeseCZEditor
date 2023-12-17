#include "Effects.hpp"
#include "Properties.hpp"

void SimpleVertexEffect::effectVertices(std::vector<float>& verticesIn)
{
	verticesIn.push_back(((VertexProperty*)params->elements["vertexfunc"])->vertices[0].x());
	verticesIn.push_back(((VertexProperty*)params->elements["vertexfunc"])->vertices[0].y());
	verticesIn.push_back(((VertexProperty*)params->elements["vertexfunc"])->vertices[0].z());
	verticesIn.push_back(0.0);
	verticesIn.push_back(0.0);
	verticesIn.push_back(((VertexProperty*)params->elements["vertexfunc"])->vertices[1].x());
	verticesIn.push_back(((VertexProperty*)params->elements["vertexfunc"])->vertices[1].y());
	verticesIn.push_back(((VertexProperty*)params->elements["vertexfunc"])->vertices[1].z());
	verticesIn.push_back(0.0);
	verticesIn.push_back(1.0);
	verticesIn.push_back(((VertexProperty*)params->elements["vertexfunc"])->vertices[2].x());
	verticesIn.push_back(((VertexProperty*)params->elements["vertexfunc"])->vertices[2].y());
	verticesIn.push_back(((VertexProperty*)params->elements["vertexfunc"])->vertices[2].z());
	verticesIn.push_back(1.0);
	verticesIn.push_back(0.0);
}

Params* SimpleVertexEffect::getDefaultParams()
{
	Params* ret = new Params();
	ret->elements["vertexfunc"] = new VertexProperty();
	return ret;
}