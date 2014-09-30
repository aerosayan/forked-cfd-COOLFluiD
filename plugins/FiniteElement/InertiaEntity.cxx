#include "InertiaEntity.hh"

//////////////////////////////////////////////////////////////////////////////

namespace COOLFluiD {

  namespace Numerics {

    namespace FiniteElement {

//////////////////////////////////////////////////////////////////////////////

using namespace COOLFluiD::Framework;

//////////////////////////////////////////////////////////////////////////////

InertiaEntity::InertiaEntity(const std::string& name) :
FEMIntegrableEntity(name)
{
}

//////////////////////////////////////////////////////////////////////////////

InertiaEntity::~InertiaEntity()
{
}

//////////////////////////////////////////////////////////////////////////////

    } // namespace COOLFluiD

  } // namespace Numerics

} // namespace FiniteElement

//////////////////////////////////////////////////////////////////////////////
