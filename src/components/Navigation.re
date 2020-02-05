[@react.component]
let make = () => {
  <>
    <Layout.Navbar color="light" light=true expand="md">
      <Layout.NavbarBrand>
        {ReasonReact.string("Znamka Shop")}
      </Layout.NavbarBrand>
      <Layout.Nav vertical=false>
        <Layout.NavItem>
          <Button
            color="link" onClick={() => ReasonReactRouter.push("/shop")}>
            {ReasonReact.string("Shop")}
          </Button>
        </Layout.NavItem>
        <Layout.NavItem>
          <Button
            color="link" onClick={() => ReasonReactRouter.push("/orders")}>
            {ReasonReact.string("Orders")}
          </Button>
        </Layout.NavItem>
      </Layout.Nav>
    </Layout.Navbar>
  </>;
};
