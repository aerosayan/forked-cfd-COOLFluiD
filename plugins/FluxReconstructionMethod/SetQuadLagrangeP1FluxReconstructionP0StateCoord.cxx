#include "Framework/State.hh"
#include "Environment/ObjectProvider.hh"

#include "FluxReconstructionMethod/FluxReconstruction.hh"
#include "FluxReconstructionMethod/SetQuadLagrangeP1FluxReconstructionP0StateCoord.hh"

//////////////////////////////////////////////////////////////////////////////

using namespace std;

//////////////////////////////////////////////////////////////////////////////

namespace COOLFluiD {

  namespace FluxReconstructionMethod {

//////////////////////////////////////////////////////////////////////////////

Environment::ObjectProvider<SetQuadLagrangeP1FluxReconstructionP0StateCoord,
               Framework::SetElementStateCoord,
               FluxReconstructionModule>
SetQuadLagrangeP1FluxReconstructionP0StateCoord("QuadLagrangeP1FluxReconstructionP0");

//////////////////////////////////////////////////////////////////////////////

void SetQuadLagrangeP1FluxReconstructionP0StateCoord::operator() (const vector<Framework::Node*>& nodes,
                                                          vector<Framework::State*>& states)
{
  cf_assert(states.size() == 1);
  cf_assert(nodes.size() == 4);

  _tempCoord = ((*nodes[0]) + (*nodes[1]) + (*nodes[2]) + (*nodes[3]))/4.0;

  // create node and assign to the state
  Framework::Node* node = new Framework::Node(_tempCoord,false);
  states[0]->setSpaceCoordinates(node);
}

//////////////////////////////////////////////////////////////////////////////

void SetQuadLagrangeP1FluxReconstructionP0StateCoord::update(const vector<Framework::Node*>& nodes,
                                                     vector<Framework::State*>& states)
{
}

//////////////////////////////////////////////////////////////////////////////

  } // namespace ShapeFunctions

} // namespace COOLFluiD

//////////////////////////////////////////////////////////////////////////////
