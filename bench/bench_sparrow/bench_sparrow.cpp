#include <benchmark/benchmark.h>
#include "sparrow.hpp"

static void BM_sparrow(benchmark::State& state) {
    sgi::sparrow ms;
    for (auto _ : state) {
        ms.increament(10);
    }
}

BENCHMARK(BM_sparrow);
BENCHMARK_MAIN();
