[@react.component]
let make = () => {
  let url = ReasonReactRouter.useUrl();

  switch (url.path) {
  | ["orders"] => <Orders />
  | ["shop"] => <Shop />
  | [] => <Shop />
  | _ => <div> {ReasonReact.string("Sorry, page not found")} </div>
  };
};
