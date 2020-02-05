let inMemoryCache = ApolloInMemoryCache.createInMemoryCache();
let headers = Js.Dict.empty();

Js.Dict.set(headers, "X-Hasura-Role", Js.Json.string("user"));

let httpLink =
  ApolloLinks.createHttpLink(
    ~uri="https://znamka-shop.herokuapp.com/v1/graphql",
    ~headers=Js.Json.object_(headers),
    (),
  );

let client =
  ReasonApollo.createApolloClient(~link=httpLink, ~cache=inMemoryCache, ());

[@react.component]
let make = () => {
  <ReasonApolloHooks.ApolloProvider client>
    <Layout.Container> <Navigation /> <Router /> </Layout.Container>
  </ReasonApolloHooks.ApolloProvider>;
};
