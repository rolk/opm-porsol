// make sure these headers see the same macros as the code do
#if HAVE_CONFIG_H
#include "config.h"
#endif /* HAVE_CONFIG_H */

// Standard headers, found with:
// find -name '*.h*' -exec grep "#include <[^\\.]*>" {} + |
// | sed 's,.*#include <\(.*\)>.*,#include <\1>,' | sort -uf
#include <algorithm>
#include <cassert>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <limits>
#include <map>
#include <numeric>
#include <ostream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <strstream>
#include <tr1/array>
#include <tr1/tuple>
#include <tr1/unordered_map>
#include <utility>
#include <vector>

// Boost headers, found with:
// find -name '*.h*' -exec grep "#include <boost" {} + |
// | sed 's,.*#include <\(.*\)>.*,#include <\1>,' | sort -uf
#include <boost/array.hpp>
#include <boost/bind.hpp>
#include <boost/filesystem/convenience.hpp>
#include <boost/filesystem.hpp>
#include <boost/iterator/iterator_facade.hpp>
#include <boost/lambda/lambda.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/mpl/if.hpp>
#include <boost/scoped_ptr.hpp>
#include <boost/static_assert.hpp>
#include <boost/type_traits/is_integral.hpp>

// all DUNE headers, found with:
// find -name '*.h*' -exec grep "#include <dune/" {} +
// | sed 's,.*#include <\(.*\)>.*,#include <\1>,' | sort -uf
#include <dune/common/array.hh>
#include <dune/common/exceptions.hh>
#include <dune/common/fmatrix.hh>
#include <dune/common/fvector.hh>
#include <dune/common/stdstreams.hh>
#include <dune/grid/common/mcmgmapper.hh>
#include <dune/grid/common/Volumes.hpp>
#include <dune/grid/CpGrid.hpp>
#include <dune/grid/io/file/vtk/vtkwriter.hh>
#include <dune/grid/sgrid.hh>
#include <dune/grid/yaspgrid.hh>
#include <dune/istl/bcrsmatrix.hh>
#include <dune/istl/bvector.hh>
#include <dune/istl/io.hh>
#include <dune/istl/operators.hh>
#include <dune/istl/overlappingschwarz.hh>
#include <dune/istl/owneroverlapcopy.hh>
#include <dune/istl/paamg/amg.hh>
#include <dune/istl/paamg/kamg.hh>
#include <dune/istl/paamg/pinfo.hh>
#include <dune/istl/preconditioners.hh>
#include <dune/istl/schwarz.hh>
#include <dune/istl/solvers.hh>
