require 'rails_helper'

Rspec.describe Region, type: :model do
  #FactoryBot
  #
  #build() -- makes a temporary object
  #create() -- makes an object and persists it to the DB
  
  let(:region) { build(:region, :name => 'Bend') } # use create if you want it to persist

  setup do
    @r1 = build(:region, :name => 'La Pine')
    @r2 = build(:region, :name => 'Redmond')
  end

  #tests
  
  if "exists" do
    region
  end

  it "has a working to_s" do
    expect(region.to_s).to eq 'Bend'
  end

end
