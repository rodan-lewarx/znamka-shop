let s = ReasonReact.string;

[@react.component]
let make = (~orders) => {
  <>
    <Table>
      <thead>
        <tr>
          <th> {s("#")} </th>
          <th> {s("Email")} </th>
          <th> {s("License Plate")} </th>
          <th> {s("Valid From")} </th>
        </tr>
      </thead>
      <tbody>
        {orders
         |> Array.mapi((i, order) =>
              <tr key={string_of_int(order##id)}>
                <td> {s(string_of_int(i + 1))} </td>
                <td> {s(order##email)} </td>
                <td> {s(order##license_plate)} </td>
                <td>
                  {order##validFrom
                   ->Js.Json.decodeString
                   ->Belt.Option.getWithDefault("")
                   ->s}
                </td>
              </tr>
            )
         |> React.array}
      </tbody>
    </Table>
  </>;
};
