//
//  ProfileTableViewLogoutCell.swift
//  MySurveys2.0
//
//  Created by Manjunath on 25/10/16.
//  Copyright © 2016 OnePoint Global. All rights reserved.
//
import UIKit

class ProfileLogoutTableViewCell: UITableViewCell {
    @IBOutlet weak var imgLogout: UIImageView!
    @IBOutlet weak var btnLogout: UIButton!

    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }

    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)
        // Configure the view for the selected state
    }
}
