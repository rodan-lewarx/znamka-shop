let inMemoryCache = ApolloInMemoryCache.createInMemoryCache();
/* Create an HTTP Link */
let httpLink =
  ApolloLinks.createHttpLink(
    ~uri="https://znamka-shop.herokuapp.com/v1/graphql",
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
