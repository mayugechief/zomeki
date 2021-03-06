# encoding: utf-8
class PortalGroup::Piece::RecentTabXml < Cms::Model::Base::PieceExtension
  set_model_name  "portal_group/piece/recent_tab"
  set_column_name :xml_properties
  set_node_xpath  "groups/group"
  set_primary_key :name
  
  attr_accessor :name
  attr_accessor :title
  attr_accessor :more
  attr_accessor :condition
  attr_accessor :sort_no
  
  elem_accessor :category
  elem_accessor :business
  elem_accessor :attribute
  elem_accessor :area
  
  validates_presence_of :name, :title, :sort_no
  
  def condition_states
    [['すべてを含む','and'], ['いずれかを含む', 'or']]
  end
  
  def condition_name
    no = condition =~ /and/ ? 0 : 1
    condition_states[no][0]
  end
  
  def category_items
    list = []
    category.each {|id| next unless i = PortalGroup::Category.find_by_id(id); list << i }
    list
  end
  
  def business_items
    list = []
    business.each {|id| next unless i = PortalGroup::Business.find_by_id(id); list << i }
    list
  end
  
  def attribute_items
    list = []
    attribute.each {|id| next unless i = PortalGroup::Attribute.find_by_id(id); list << i }
    list
  end
  
  def area_items
    list = []
    area.each {|id| next unless i = PortalGroup::Area.find_by_id(id); list << i }
    list
  end
end