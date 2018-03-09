# bs-react-fela-examples

[bs-react-fela](https://github.com/astrada/bs-react-fela) examples. Porting to
ReasonML of
[react-fela](https://github.com/rofrischmann/fela/tree/master/packages/react-fela)
examples.

### Getting started

1.  Install dependencies:

    npm install --global bs-platform
    yarn install

2.  Start the demo:

    yarn start

## AppThemed.re

* working example of using compositor.io theme with a component.

* import the theme.json file into the module and call it.

```r
[@bs.module] external theme : Js.t({..}) = "./theme.json";
...
<ExampleGroup title="withTheme">
    <ReactFela.ThemeProvider key="componentWithTheme" theme>
    ...<ComponentWithTheme />
    </ReactFela.ThemeProvider>
</ExampleGroup>
```
