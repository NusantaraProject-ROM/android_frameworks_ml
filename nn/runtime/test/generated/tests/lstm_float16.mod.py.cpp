// clang-format off
// Generated file (from: lstm_float16.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace lstm_float16 {
// Generated lstm_float16 test
#include "generated/examples/lstm_float16.example.cpp"
// Generated model constructor
#include "generated/models/lstm_float16.model.cpp"
} // namespace lstm_float16

TEST_F(GeneratedTests, lstm_float16) {
    execute(lstm_float16::CreateModel,
            lstm_float16::is_ignored,
            lstm_float16::get_examples());
}
