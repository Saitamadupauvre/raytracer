#pragma once

#include "components/ILightSource.hpp"
#include "math/Color.hpp"
#include "math/Vector3D.hpp"

namespace Raytracer {

class PointLight : public ILightSource {
public:
    PointLight() = default;

    LightSample getSample(const Point3D& local_hit_point) const override;

private:
};

} // namespace Raytracer
