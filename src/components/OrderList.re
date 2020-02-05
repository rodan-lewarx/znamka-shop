let s = ReasonReact.string;

[@react.component]
let make = () => {
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
        <tr key="key">
          <td> {s(string_of_int(1))} </td>
          <td> {s("email")} </td>
          <td> {s("license_plate")} </td>
          <td> "validFrom"->s </td>
        </tr>
      </tbody>
    </Table>
  </>;
};
