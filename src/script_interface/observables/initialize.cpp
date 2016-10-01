/*
  Copyright (C) 2015,2016 The ESPResSo project

  This file is part of ESPResSo.

  ESPResSo is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  ESPResSo is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "initialize.hpp"
#include "ParallelScriptInterface.hpp"
#include "utils/Factory.hpp"
#include "PidObservable.hpp"

//#include "ParticleVelocities.hpp"
//#include "ParticlePositions.hpp"

namespace ScriptInterface {
namespace Observables {

#define REGISTER(name) \
  ParallelScriptInterface<ScriptInterface:: name >:: \
    register_new("" #name "");


void initialize() {
//  ParallelScriptInterface<ScriptInterface::Observables::ParticleVelocities>::
//    register_new("Observables::ParticleVelocities");
//  ParallelScriptInterface<ScriptInterface::Observables::Observables>::
//    register_new("Observables::Observables");
REGISTER(Observables::ParticleVelocities);
REGISTER(Observables::ParticlePositions);


}
} /* namespace Obseravbles */
} /* namespace ScriptInterface */