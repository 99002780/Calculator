import React, { Component } from 'react'
import EmployeeService from '../services/EmployeeService'

class ViewEmployeeComponent extends Component {
    constructor(props) {
        super(props)

        this.state = {
            id: this.props.match.params.id,
            employee: {}
        }
    }

    componentDidMount(){
        EmployeeService.getEmployeeById(this.state.id).then( res => {
            this.setState({employee: res.data});
        })
    }

    render() {
        return (
            <div>
                <br></br>
                <div className = "card col-md-6 offset-md-3">
                    <h3 className = "text-center"> View Contestant Details</h3>
                    <div className = "card-body">
                        <div className = "row">
                            <label> Contestant Name: </label>
                            <div> { this.state.employee.name }</div>
                        </div>
                        
                        <div className = "row">
                            <label> Contestant Email ID: </label>
                            <div> { this.state.employee.emailId }</div>
                        </div>
                        <div className = "row">
                            <label> Contest Name: </label>
                            <div> { this.state.employee.contestName }</div>
                        </div>
                        <div className = "row">
                            <label> Phone Number: </label>
                            <div> { this.state.employee.phoneNo }</div>
                        </div>
                    </div>  

                </div>
            </div>
        )
    }
}

export default ViewEmployeeComponent
