// DO NOT EDIT;
// Generated by ml/nn/runtime/test/specs/generate_test.sh
#include "../../TestGenerated.h"

namespace conv_3_h3_w2_SAME_relaxed {
std::vector<MixedTypedExample> examples = {
// Generated conv_3_h3_w2_SAME_relaxed test
#include "generated/examples/conv_3_h3_w2_SAME_relaxed.example.cpp"
};
// Generated model constructor
#include "generated/models/conv_3_h3_w2_SAME_relaxed.model.cpp"
} // namespace conv_3_h3_w2_SAME_relaxed
TEST_F(GeneratedTests, conv_3_h3_w2_SAME_relaxed) {
    execute(conv_3_h3_w2_SAME_relaxed::CreateModel,
            conv_3_h3_w2_SAME_relaxed::is_ignored,
            conv_3_h3_w2_SAME_relaxed::examples);
}