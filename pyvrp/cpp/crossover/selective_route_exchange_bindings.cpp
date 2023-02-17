#include "crossover.h"

#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(selective_route_exchange, m)
{
    m.def("selective_route_exchange",
          &selectiveRouteExchange,
          py::arg("parents"),
          py::arg("data"),
          py::arg("penalty_manager"),
          py::arg("rng"));
}