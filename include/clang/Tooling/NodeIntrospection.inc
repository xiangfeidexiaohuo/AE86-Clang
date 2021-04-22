
namespace clang {
namespace tooling {

bool NodeIntrospection::hasIntrospectionSupport() { return false; }

NodeLocationAccessors NodeIntrospection::GetLocations(clang::Stmt const *) {
  return {};
}
NodeLocationAccessors NodeIntrospection::GetLocations(clang::Decl const *) {
  return {};
}
NodeLocationAccessors NodeIntrospection::GetLocations(
    clang::CXXCtorInitializer const *) {
  return {};
}
NodeLocationAccessors NodeIntrospection::GetLocations(
    clang::NestedNameSpecifierLoc const*) {
  return {};
}
NodeLocationAccessors NodeIntrospection::GetLocations(
    clang::TemplateArgumentLoc const*) {
  return {};
}
NodeLocationAccessors NodeIntrospection::GetLocations(
    clang::CXXBaseSpecifier const*) {
  return {};
}
NodeLocationAccessors NodeIntrospection::GetLocations(
    clang::TypeLoc const&) {
  return {};
}
NodeLocationAccessors
NodeIntrospection::GetLocations(clang::DynTypedNode const &) {
  return {};
}
} // namespace tooling
} // namespace clang
    