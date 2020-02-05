module GetOrders = [%graphql
  {| query getOrders {
  orders {
    id
    email
    license_plate
    validFrom
  }
}
|}
];

module GetOrdersQuery = ReasonApolloHooks.Query.Make(GetOrders);

[@react.component]
let make = () => {
  let (orders, _full) = GetOrdersQuery.use();

  <>
    <PageHeading text="Znamka orders" />
    {switch (orders) {
     | NoData => <div> {React.string("No data loaded")} </div>
     | Loading => <div> {React.string("Data Loading")} </div>
     | Error(_error) => <div> {React.string("Error Loading Data")} </div>
     | Data(data) => <OrderList orders=data##orders />
     }}
  </>;
};
