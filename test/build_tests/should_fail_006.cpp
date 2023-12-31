#include <ct/url/lex/lex.hpp>

#include <concepts>

using ct::url::lex::tokenize_t;
using ct::lex::token;
using ct::lex::token_list;

namespace {

// URIs cannot begin with a number.
static_assert(std::same_as<tokenize_t<"123example.com">, token_list<...>>);

}  // namespace

int main() {}
