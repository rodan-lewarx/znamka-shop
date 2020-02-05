module Container = {
  [@bs.module "reactstrap"] [@react.component]
  external make:
    (
      ~tag: 'a=?,
      ~fluid: bool=?,
      ~className: string=?,
      ~cssModule: 'b=?,
      ~children: React.element=?,
      unit
    ) =>
    React.element =
    "Container";
};

module Navbar = {
  [@bs.module "reactstrap"] [@react.component]
  external make:
    (
      ~light: bool=?,
      ~dark: bool=?,
      ~inverse: 'a=?,
      ~full: bool=?,
      ~fixed: string=?,
      ~sticky: string=?,
      ~color: string=?,
      ~role: string=?,
      ~tag: 'b=?,
      ~className: string=?,
      ~cssModule: 'c=?,
      ~toggleable: 'd=?,
      ~expand: 'e=?,
      ~children: React.element=?,
      unit
    ) =>
    React.element =
    "Navbar";
};

module NavbarBrand = {
  [@bs.module "reactstrap"] [@react.component]
  external make:
    (
      ~tag: 'a=?,
      ~className: string=?,
      ~cssModule: 'b=?,
      ~href: string=?,
      ~children: React.element=?,
      unit
    ) =>
    React.element =
    "NavbarBrand";
};

module Nav = {
  [@bs.module "reactstrap"] [@react.component]
  external make:
    (
      ~tabs: bool=?,
      ~pills: bool=?,
      ~vertical: 'a=?,
      ~horizontal: string=?,
      ~justified: bool=?,
      ~fill: bool=?,
      ~navbar: bool=?,
      ~card: bool=?,
      ~tag: 'b=?,
      ~className: string=?,
      ~cssModule: 'c=?,
      ~children: React.element=?,
      unit
    ) =>
    React.element =
    "Nav";
};

module NavItem = {
  [@bs.module "reactstrap"] [@react.component]
  external make:
    (
      ~tag: 'a=?,
      ~active: bool=?,
      ~className: string=?,
      ~cssModule: 'b=?,
      ~children: React.element=?,
      unit
    ) =>
    React.element =
    "NavItem";
};
