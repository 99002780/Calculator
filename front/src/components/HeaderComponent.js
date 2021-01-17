import React, { Component } from 'react'

class HeaderComponent extends Component {
    constructor(props) {
        super(props)

        this.state = {
                 
        }
    }

    render() {
        return (
            <div>
                <header className="header">
                    <nav className="navbar navbar-expand-md navbar-dark bg-dark">
                        <div><a href="https://javaguides.net" className="navbar-brand" >Contest Registration</a></div>
                    </nav>
                </header>
            </div>
        )
    }
}
// nav navbar-nav navbar-center
export default HeaderComponent
