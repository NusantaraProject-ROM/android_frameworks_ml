// clang-format off
// Generated file (from: random_multinomial_float16.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace random_multinomial_float16 {
// Generated random_multinomial_float16 test
#include "generated/examples/random_multinomial_float16.example.cpp"
// Generated model constructor
#include "generated/models/random_multinomial_float16.model.cpp"
} // namespace random_multinomial_float16

TEST_F(GeneratedTests, random_multinomial_float16) {
    execute(random_multinomial_float16::CreateModel,
            random_multinomial_float16::is_ignored,
            random_multinomial_float16::get_examples());
}

