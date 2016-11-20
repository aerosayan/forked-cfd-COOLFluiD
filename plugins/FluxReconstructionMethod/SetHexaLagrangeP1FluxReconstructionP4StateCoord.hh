#ifndef COOLFluiD_ShapeFunctions_SetHexaLagrangeP1FluxReconstructionP4StateCoord_hh
#define COOLFluiD_ShapeFunctions_SetHexaLagrangeP1FluxReconstructionP4StateCoord_hh

//////////////////////////////////////////////////////////////////////////////

#include "Framework/SetElementStateCoord.hh"

//////////////////////////////////////////////////////////////////////////////

namespace COOLFluiD {

  namespace Framework { class Node; }
  namespace Framework { class State; }

  namespace FluxReconstructionMethod {


//////////////////////////////////////////////////////////////////////////////

/**
 * This class is a functor and offers an abstract interface
 * for setting the corresponding space coordinates (Framework::Node) in
 * the State's in a hexahedral with P1 geometrical and P4 solution
 * interpolation.
 *
 * @author Kris Van den Abeele
 */
class SetHexaLagrangeP1FluxReconstructionP4StateCoord : public Framework::SetElementStateCoord {

public:

  /**
   * Constructor
   */
  SetHexaLagrangeP1FluxReconstructionP4StateCoord() : Framework::SetElementStateCoord()
  {
  }

  /**
   * Destructor
   */
  ~SetHexaLagrangeP1FluxReconstructionP4StateCoord()
  {
  }

  /**
   * Overloading of the operator () to make this class act as a
   * functor
   * @param nodes   list of the nodes in the current element
   * @param states  list of the states in the current element
   */
  void operator() (const std::vector<Framework::Node*>& nodes,
                   std::vector<Framework::State*>& states);

  /**
   * Function allowing to update the StateCoord
   * @param nodes   list of the nodes in the current element
   * @param states  list of the states in the current element
   */
  void update(const std::vector<Framework::Node*>& nodes,
                            std::vector<Framework::State*>& states);

}; // end of class SetHexaLagrangeP1FluxReconstructionP4StateCoord

//////////////////////////////////////////////////////////////////////////////

  } // namespace FluxReconstructionMethod

} // namespace COOLFluiD

//////////////////////////////////////////////////////////////////////////////

#endif // COOLFluiD_ShapeFunctions_SetHexaLagrangeP1FluxReconstructionP4StateCoord_hh
