
namespace clang {
namespace tooling {

NodeLocationAccessors NodeIntrospection::GetLocations(clang::Stmt const *) {
  return {};
}
NodeLocationAccessors NodeIntrospection::GetLocations(clang::Decl const *) {
  return {};
}
NodeLocationAccessors
NodeIntrospection::GetLocations(clang::DynTypedNode const &) {
  return {};
}
} // namespace tooling
} // namespace clang
    